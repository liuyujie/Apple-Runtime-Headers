//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_CDLocalContext.h"

@class NSArray, _CDContextualPredicate;

@protocol _CDUserContext <_CDLocalContext>
- (NSArray *)valuesForKeyPaths:(NSArray *)arg1 inContextsMatchingPredicate:(_CDContextualPredicate *)arg2;
- (id <_CDLocalContext>)localContext;
@end

