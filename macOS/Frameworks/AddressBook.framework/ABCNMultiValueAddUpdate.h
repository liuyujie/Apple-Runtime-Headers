//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABCNMultiValueUpdate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ABCNMultiValueAddUpdate : NSObject <ABCNMultiValueUpdate>
{
    id _value;
    NSString *_label;
    NSString *_identifier;
}

@property(readonly, copy) NSString *description;
- (void)applyToABMutableMultiValue:(id)arg1 transform:(CDUnknownBlockType)arg2;
- (void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2;
- (void)dealloc;
- (id)initWithValue:(id)arg1 label:(id)arg2 identifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
