//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_IPropertyValueController.h>

@class FI_IPropertyValueApplicator;

__attribute__((visibility("hidden")))
@interface FI_IPropertyValueApplicatorController : FI_IPropertyValueController
{
    struct TNSRef<FI_IPropertyValueApplicator, void> _valueApplicator;
    struct TFENodeVector _nodes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)canModifyNodes:(const struct TFENodeVector *)arg1;
- (void)nodesDidChange;
- (const struct TFENodeVector *)nodes;
- (void)nodesWillChange;
- (int)applyValueToNodes:(id)arg1;
- (void)updateWithNodes:(const struct TFENodeVector *)arg1;
@property(retain) FI_IPropertyValueApplicator *valueApplicator; // @dynamic valueApplicator;

@end

