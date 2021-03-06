//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _INPBHomeAttribute, _INPBHomeFilter;

@protocol _INPBHomeContent <NSObject>
+ (Class)actionsType;
@property(readonly, nonatomic) _Bool hasFilter;
@property(retain, nonatomic) _INPBHomeFilter *filter;
@property(readonly, nonatomic) unsigned int actionsCount;
@property(copy, nonatomic) NSArray *actions;
- (_INPBHomeAttribute *)actionsAtIndex:(unsigned int)arg1;
- (void)addActions:(_INPBHomeAttribute *)arg1;
- (void)clearActions;
@end

