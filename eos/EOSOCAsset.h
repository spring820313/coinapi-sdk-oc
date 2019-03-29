//
//  EOSAsset.h
//  coinapi
//
//  Created by xgc on 8/30/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>

class EOSAsset;

@interface EOSOCAsset : NSObject
-(EOSAsset*)toEOSAsset;
@property(nonatomic, assign) double amount;
@property(nonatomic, assign) NSInteger precision;
@property(nonatomic, copy) NSString* symbol;
@end
