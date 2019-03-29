//
//  CAHdKeys.h
//  coinapi
//
//  Created by xgc on 9/25/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>

class HdKeys;

@interface CAHdKeys : NSObject
+(id)initWithHdKeys: (HdKeys*)hdKeys;
@property(nonatomic, copy) NSString* symbol;
@property(nonatomic, assign) NSInteger coinType;
@property(nonatomic, copy) NSString* hdMasterPriKey;
@property(nonatomic, copy) NSString* hdMasterPubKey;
@end
