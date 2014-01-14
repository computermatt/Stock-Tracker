//
//  Finance.m
//  StockTrader
//
//  Created by Matt Smicinski on 1/14/14.
//  Copyright (c) 2014 Matt Smicinski. All rights reserved.
//
/*
	I know that OSX/iOS developers love the whole prefix thing, but no.
	If this angers you, :%s/Finance/MSFinance and then you can be happy again.
 */

#import "Finance.h"

#define financeURL @"http://finance.yahoo.com/d/quotes.csv?s="
#define funkyTag @"&f="
#define tags @"abcdeghjkk2mnoprsvwxy" //Tags from http://www.gummy-stuff.org/Yahoo-data.htm

@implementation Finance

+(Stock*)getStock:(NSString*)stockName {
	Stock* stock = [Stock new];
	NSURL *url = [NSURL URLWithString:[NSString stringWithFormat:@"%@%@%@%@", financeURL, stockName, funkyTag, tags]];
	NSString *data = [NSString stringWithContentsOfURL:url encoding:NSStringEncodingConversionAllowLossy error:nil];
	[stock parseData:data];
	
	return stock;
}

@end
