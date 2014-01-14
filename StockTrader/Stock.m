//
//  Stock.m
//  StockTrader
//
//  Created by Matt Smicinski on 1/14/14.
//  Copyright (c) 2014 Matt Smicinski. All rights reserved.
//

#import "Stock.h"

@implementation Stock
@synthesize ask;
@synthesize bid;
@synthesize change;
@synthesize dividend;
@synthesize earnings;
@synthesize dayLow;
@synthesize dayHigh;
@synthesize yearLow;
@synthesize yearHigh;
@synthesize changePercent;
@synthesize dayRange;
@synthesize name;
@synthesize open;
@synthesize prevClose;
@synthesize PERatio;
@synthesize symbol;
@synthesize volume;
@synthesize yearRange;
@synthesize stockExchange;
@synthesize dividendYield;
-(void)parseData:(NSString*)data
{
	NSArray *contents = [data componentsSeparatedByString:@","];
	NSArray *stockCrap = @[@"ask",@"bid",@"change",@"dividend",@"earnings",@"dayLow",@"dayHigh",@"yearLow",@"yearHigh",@"changePercent",@"dayRange",@"name",@"open",@"prevClose",@"PERatio",@"symbol",@"volume",@"yearRange",@"stockExchange",@"dividendYield"]; //I'd like to take this moment and thank vim for the wonderful %s feature.
	
	for (int d = 0; d < [contents count]; d++) {
		//See why I put all the variables in an array ;)
		[self setValue:contents[d] forKey:stockCrap[d]];
	}
	
	
}
@end
