//
//  EOSKeyPermissionWeight.h
//  coinapi
//
//  Created by xgc on 8/30/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>

class TypeKeyPermissionWeight;

@interface EOSKeyPermissionWeight : NSObject
-(TypeKeyPermissionWeight*)toKeyPermissionWeight;
@property(nonatomic, copy) NSString* pubKey;
@property(nonatomic, assign) short weight;
@end
