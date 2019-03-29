//
//  CABaseOperation.h
//  coinapi
//
//  Created by xgc on 8/29/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>

static const int kNullOperation = -1;
static const int kTransferOperation = 0;

@interface CABaseOperation : NSObject
@property(nonatomic, assign) NSInteger operType;
@end
