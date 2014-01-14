//
//  Finance.h
//  StockTrader
//
//  Created by Matt Smicinski on 1/14/14.
//  Copyright (c) 2014 Matt Smicinski. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Stock.h"

@interface Finance : NSObject
+(Stock*)getStock:(NSString*)stockName;
@end
