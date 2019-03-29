//
//  EOSAuthority.h
//  coinapi
//
//  Created by xgc on 8/30/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EOSKeyPermissionWeight.h"

class TypeAuthority;

@interface EOSAuthority : NSObject
-(TypeAuthority*)toAuthority;
@property(nonatomic, assign) NSInteger threshold;
@property(nonatomic, retain) NSMutableArray<EOSKeyPermissionWeight*>* keys;
@end
