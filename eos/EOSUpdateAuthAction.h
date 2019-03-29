//
//  EOSUpdateAuthAction.h
//  coinapi
//
//  Created by xgc on 8/30/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EOSPermissionLevel.h"
#import "EOSAuthority.h"
#import "EOSAction.h"

class Action;

@interface EOSUpdateAuthAction : EOSAction
-(Action*)toUpdateAuth;
-(NSString*) actionName;
@property(nonatomic, retain) EOSPermissionLevel* permissionLevel;
@property(nonatomic, copy) NSString* parent;
@property(nonatomic, retain) EOSAuthority* authority;
@end
