//
//  CAAssetAmount.h
//  coinapi
//
//  Created by xgc on 8/29/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>

class AssetAmount;

@interface CAAssetAmount : NSObject
-(AssetAmount*)toAssetAmount;
@property(nonatomic, copy) NSString* assetId;
@property(nonatomic, assign) UInt64 value;
@end
