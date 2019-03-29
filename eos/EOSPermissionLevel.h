//
//  EOSPermissionLevel.h
//  coinapi
//
//  Created by xgc on 8/30/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>

class TypePermissionLevel;

@interface EOSPermissionLevel : NSObject

-(TypePermissionLevel*) toPermissionLevel;
@property(nonatomic, copy) NSString* actor;
@property(nonatomic, copy) NSString* permission;
@end
