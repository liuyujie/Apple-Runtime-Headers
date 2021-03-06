//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/RECondition.h>

@class NSSet;

@interface _REAggregateRuleCondition : RECondition
{
    unsigned int _type;
    NSSet *_conditions;
}

@property(readonly, nonatomic) NSSet *conditions; // @synthesize conditions=_conditions;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(unsigned int)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (_Bool)_acceptsLeftFeatureMap:(id)arg1 rightFeatureMap:(id)arg2;
- (_Bool)_acceptsFeatureMap:(id)arg1;
- (id)_inflectionFeatureValuePairs;
- (_Bool)_validForRanking;
- (_Bool)_requiresTwoFeatures;
- (id)_notCondition;
- (id)_dependentFeatures;
@property(readonly, nonatomic) unsigned int count;
- (id)initWithConditions:(id)arg1 type:(unsigned int)arg2;

@end

