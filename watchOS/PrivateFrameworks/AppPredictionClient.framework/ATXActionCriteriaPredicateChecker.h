//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSPredicateVisitor.h"

@class NSSet;

@interface ATXActionCriteriaPredicateChecker : NSObject <NSPredicateVisitor>
{
    NSSet *_propertyNames;
    _Bool _ok;
}

- (void).cxx_destruct;
- (void)visitPredicateOperator:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (_Bool)isValid:(id)arg1;
- (id)initWithObject:(id)arg1;

@end

