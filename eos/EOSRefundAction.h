//
//  EOSRefundAction.h
//  coinapi
//
//  Created by xgc on 8/30/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EOSAction.h"

class Action;

@interface EOSRefundAction : EOSAction
-(Action*)toRefund;
-(NSString*) actionName;
@property(nonatomic, copy) NSString* owner;
@end
