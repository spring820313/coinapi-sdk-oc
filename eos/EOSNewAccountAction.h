//
//  EOSNewAccountAction.h
//  coinapi
//
//  Created by xgc on 8/30/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EOSAuthority.h"
#import "EOSAction.h"

class Action;

@interface EOSNewAccountAction : EOSAction
-(Action*)toNewAccount;
-(NSString*) actionName;
@property(nonatomic, copy) NSString* creator;
@property(nonatomic, copy) NSString* accountName;
@property(nonatomic, retain) EOSAuthority* owner;
@property(nonatomic, retain) EOSAuthority* active;
@end
