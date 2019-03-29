//
//  MultiAddrOutput.h
//  coinapi
//
//  Created by xgc on 9/17/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>

class MultiOutput;

@interface MultiAddrOutput : NSObject
-(MultiOutput*) toMultiOutput;
@property(nonatomic, copy) NSString* address;
@property(nonatomic, assign) UInt64 value;
@end
