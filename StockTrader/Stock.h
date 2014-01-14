//
//  Stock.h
//  StockTrader
//
//  Created by Matt Smicinski on 1/14/14.
//  Copyright (c) 2014 Matt Smicinski. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
/*
	Order stuff comes in:
		ask
		bid
		change
		dividend/share
		earnings/share
		Days low
		Days high
		52 week low
		52 week high
		change percent (Real time)
		days range
		name
		open
		previous close
		p/e ratio
		symbol
		volume
		52 week range
		stock exchange
		dividend yield
 */
@interface Stock : NSObject
{
	//Make them all strings for simplicitys sake, also because I don't plan on doing math on this data
	//If you want to do math with the data generated here, convert it yourself.
	NSString *ask;
	NSString *bid;
	NSString *change;
	NSString *dividend;
	NSString *earnings;
	NSString *dayLow;
	NSString *dayHigh;
	NSString *yearLow;
	NSString *yearHigh;
	NSString *changePercent;
	NSString *dayRange;
	NSString *name;
	NSString *open;
	NSString *prevClose;
	NSString *PERatio;
	NSString *symbol;
	NSString *volume;
	NSString *yearRange;
	NSString *stockExchange;
	NSString *dividendYield;
}

@property (nonatomic) NSString *ask;
@property (nonatomic) NSString *bid;
@property (nonatomic) NSString *change;
@property (nonatomic) NSString *dividend;
@property (nonatomic) NSString *earnings;
@property (nonatomic) NSString *dayLow;
@property (nonatomic) NSString *dayHigh;
@property (nonatomic) NSString *yearLow;
@property (nonatomic) NSString *yearHigh;
@property (nonatomic) NSString *changePercent;
@property (nonatomic) NSString *dayRange;
@property (nonatomic) NSString *name;
@property (nonatomic) NSString *open;
@property (nonatomic) NSString *prevClose;
@property (nonatomic) NSString *PERatio;
@property (nonatomic) NSString *symbol;
@property (nonatomic) NSString *volume;
@property (nonatomic) NSString *yearRange;
@property (nonatomic) NSString *stockExchange;
@property (nonatomic) NSString *dividendYield;

-(void)parseData:(NSString*)data;
@end
