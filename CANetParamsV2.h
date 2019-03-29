//
//  CANetParamsEx.h
//  coinapi
//
//  Created by xgc on 1/16/19.
//  Copyright © 2019 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CANetParams.h"

class NetParamsEx;

@interface CANetParamsV2 : CANetParams

+(id)initWithNetParamsEx: (NetParamsEx*)params;
-(NetParamsEx*) toNetParamsEx;

@property(nonatomic, assign) NSInteger addressType;

@end
