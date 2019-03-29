//
//  CABtWallet.h
//  Test
//
//  Created by xgc on 12/26/17.
//  Copyright © 2017 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CABtSeed.h"

class BtWallet;

@interface CABtWallet : NSObject

+(id)initWithBtWallet: (BtWallet*)wallet;

@property(nonatomic, retain) CABtSeed* btSeed;
@property(nonatomic, copy) NSString* pubkey;
@property(nonatomic, copy) NSString* address;
@property(nonatomic, copy) NSString* symbol;
@property(nonatomic, copy) NSString* master3LevelPubKey;

@end
