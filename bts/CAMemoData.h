//
//  CAMemoData.h
//  coinapi
//
//  Created by xgc on 8/29/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface CAMemoData : NSObject
@property(nonatomic, copy) NSString* priKey;
@property(nonatomic, copy) NSString* toMemoPubkey;
@property(nonatomic, copy) NSString* memo;
@end
