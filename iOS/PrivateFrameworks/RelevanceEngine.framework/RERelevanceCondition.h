//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface RERelevanceCondition : NSObject <NSCopying>
{
    CDUnknownBlockType _condition;
}

+ (id)conditionWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (float)_evaluateRelevanceWithEnvironment:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCondtionBlock:(CDUnknownBlockType)arg1;

@end

