//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BBAssociationSet : NSObject
{
    NSString *_associationSetKey;
    unsigned int _associatedObjectMemoryPointerFunction;
}

+ (id)setWithWeakAssociation;
+ (id)setWithStrongAssociation;
- (void).cxx_destruct;
- (void)copyAssociationsForObject:(id)arg1 toObject:(id)arg2;
- (id)associatedObjectsForObject:(id)arg1;
- (void)associateObject:(id)arg1 withObject:(id)arg2;
- (id)_initWithMemoryPointerFunction:(unsigned int)arg1;

@end
