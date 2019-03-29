//
//  MultiAddrBtcVout.h
//  coinapi
//
//  Created by xgc on 9/17/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "../CABtcVout.h"

class MultiBtcvoutForm;

@interface MultiAddrBtcVout : CABtcVout
-(MultiBtcvoutForm*) toMultiBtcvoutForm;
@property(nonatomic, copy) NSString* priKey;
@property(nonatomic, copy) NSString* address;
@end
