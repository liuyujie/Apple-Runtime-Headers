//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, _UICompoundObjectMap;

__attribute__((visibility("hidden")))
@interface _UIViewAnimatablePropertyTransformer : NSObject
{
    _Bool _presentationValueCallbackRan;
    CDUnknownBlockType _modelValueChangedCallback;
    CDUnknownBlockType _presentationValueChangedCallback;
    CDUnknownBlockType _stabilizedCallback;
    _UICompoundObjectMap *_capturedProperties;
    NSMutableSet *_runningProgresses;
}

@property(retain, nonatomic) NSMutableSet *runningProgresses; // @synthesize runningProgresses=_runningProgresses;
@property(retain, nonatomic) _UICompoundObjectMap *capturedProperties; // @synthesize capturedProperties=_capturedProperties;
@property(copy, nonatomic) CDUnknownBlockType stabilizedCallback; // @synthesize stabilizedCallback=_stabilizedCallback;
@property(copy, nonatomic) CDUnknownBlockType presentationValueChangedCallback; // @synthesize presentationValueChangedCallback=_presentationValueChangedCallback;
@property(copy, nonatomic) CDUnknownBlockType modelValueChangedCallback; // @synthesize modelValueChangedCallback=_modelValueChangedCallback;
- (void).cxx_destruct;
- (void)progressInvalidated:(id)arg1;
- (void)modelValueUpdatedForProgress:(id)arg1;
- (void)presentationValueStabilizedForProgress:(id)arg1;
- (void)presentationValueUpdatedForProgress:(id)arg1;
- (id)initWithInputAnimatableProperties:(id)arg1 presentationValueChangedCallback:(CDUnknownBlockType)arg2;
- (id)initWithProgressAnimatableProperty:(id)arg1 modelValueSetter:(CDUnknownBlockType)arg2 presentationValueSetter:(CDUnknownBlockType)arg3;
- (id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(CDUnknownBlockType)arg2 presentationValueSetter:(CDUnknownBlockType)arg3;
- (id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(CDUnknownBlockType)arg2 presentationValueSetter:(CDUnknownBlockType)arg3 stabilizedCallback:(CDUnknownBlockType)arg4;
- (id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(CDUnknownBlockType)arg2 presentationValueSetter:(CDUnknownBlockType)arg3 stabilizedCallback:(CDUnknownBlockType)arg4 allowsProgressAnimatableProperties:(_Bool)arg5;

@end

