//
//  CABtcVout.h
//  Test
//
//  Created by xgc on 12/26/17.
//  Copyright © 2017 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>

class BtcvoutForm;

@interface CABtcVout : NSObject

+(id)initWithBtcVout: (BtcvoutForm*)vout;

-(BtcvoutForm*) toBtcvoutForm;

@property(nonatomic, copy) NSString* txHash;
@property(nonatomic, assign) UInt64 value;
@property(nonatomic, assign) NSInteger n;
@property(nonatomic, assign) BOOL coinBase;

@end
