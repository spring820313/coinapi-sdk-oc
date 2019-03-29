//
//  CAU256.h
//  Test
//
//  Created by xgc on 1/5/18.
//  Copyright © 2018 xgc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CAU256 : NSObject

+(id)initWithString: (NSString*)data;

-(void)addWith:(NSString*) rhs;

-(void)subWith:(NSString*) rhs;

-(void)mulWith:(NSString*) rhs;

-(void)divWith:(NSString*) rhs;

-(void)powWith:(NSString*) rhs;

-(NSString*)toString;

-(NSString*)getIntPart;

-(NSString*)getDecPart;

@property(nonatomic, copy) NSString* value;

@end
