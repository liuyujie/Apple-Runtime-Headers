//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HFIconDescriptor.h"

@class NSString;

@interface HFPrimaryStateIconDescriptor : NSObject <HFIconDescriptor>
{
    NSString *_identifier;
    long long _primaryState;
}

@property(readonly, nonatomic) long long primaryState; // @synthesize primaryState=_primaryState;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 primaryState:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

