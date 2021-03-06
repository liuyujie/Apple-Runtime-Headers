//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface HKAnimatableObject : NSObject
{
    NSMutableDictionary *_animatableProperties;
}

- (void).cxx_destruct;
- (id)_newAnimatablePropertyForType:(unsigned int)arg1;
- (id)endingValueForPropertyType:(unsigned int)arg1;
- (id)_animatablePropertyForType:(unsigned int)arg1;
- (_Bool)areAnimationsInProgress;
- (void)removeAllAnimationsForPropertyType:(unsigned int)arg1;
- (void)addAnimation:(id)arg1 forPropertyType:(unsigned int)arg2;
- (void)setValue:(id)arg1 forPropertyType:(unsigned int)arg2;
- (void)update:(double)arg1;

@end

