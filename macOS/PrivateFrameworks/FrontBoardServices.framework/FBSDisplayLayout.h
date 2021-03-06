//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "BSXPCCoding.h"

@class FBSDisplayConfiguration, NSArray, NSDate, NSMutableArray, NSString;

@interface FBSDisplayLayout : NSObject <BSXPCCoding, BSDescriptionProviding>
{
    NSMutableArray *_elements;
    FBSDisplayConfiguration *_displayConfiguration;
    long long _displayType;
    long long _backlightLevel;
    long long _interfaceOrientation;
    struct CGRect _bounds;
    struct CGRect _referenceBounds;
    NSDate *_timestamp;
}

@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(readonly, nonatomic) struct CGRect referenceBounds; // @synthesize referenceBounds=_referenceBounds;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) long long displayBacklightLevel; // @synthesize displayBacklightLevel=_backlightLevel;
@property(nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) FBSDisplayConfiguration *displayConfiguration; // @synthesize displayConfiguration=_displayConfiguration;
- (void).cxx_destruct;
- (id)display;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)_sortElements;
- (void)finalizeLayout;
- (void)removeElement:(id)arg1;
- (void)addElement:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)_initWithElements:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

