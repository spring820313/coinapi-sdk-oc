//
//  EOSUndelegateBwAction.h
//  coinapi
//
//  Created by xgc on 8/30/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EOSOCAsset.h"
#import "EOSAction.h"

class Action;

@interface EOSUndelegateBwAction : EOSAction
-(Action*)toUndelegateBw;
-(NSString*) actionName;
@property(nonatomic, copy) NSString* from;
@property(nonatomic, copy) NSString* to;
@property(nonatomic, retain) EOSOCAsset* stakeNetQuantity;
@property(nonatomic, retain) EOSOCAsset* stakeCpuQuantity;
@end
