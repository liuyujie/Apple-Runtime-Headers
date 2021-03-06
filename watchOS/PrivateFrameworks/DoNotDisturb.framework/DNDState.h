//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface DNDState : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _active;
    _Bool _willSuppressInterruptions;
    NSArray *_activeModeAssertionMetadata;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *activeModeAssertionMetadata; // @synthesize activeModeAssertionMetadata=_activeModeAssertionMetadata;
@property(readonly, nonatomic) _Bool willSuppressInterruptions; // @synthesize willSuppressInterruptions=_willSuppressInterruptions;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithActive:(_Bool)arg1 willSuppressInterruptions:(_Bool)arg2 activeModeAssertionMetadata:(id)arg3;
@property(readonly, copy, nonatomic) NSArray *activeModeIdentifiers; // @dynamic activeModeIdentifiers;

@end

