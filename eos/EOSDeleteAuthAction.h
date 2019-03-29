//
//  EOSDeleteAuthAction.h
//  coinapi
//
//  Created by xgc on 8/30/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EOSPermissionLevel.h"
#import "EOSAction.h"


class Action;

@interface EOSDeleteAuthAction : EOSAction
-(Action*) toDeleteAuth;
-(NSString*) actionName;

@property(nonatomic, retain) EOSPermissionLevel* permissionLevel;
@end
