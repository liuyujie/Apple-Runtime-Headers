//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INCacheableContainer.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class INPerson, NSDate, NSNumber, NSString;

@interface INCallRecord : NSObject <INCacheableContainer, NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSDate *_dateCreated;
    INPerson *_caller;
    int _callRecordType;
    NSNumber *_callDuration;
    NSNumber *_unseen;
    int _callCapability;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) int callCapability; // @synthesize callCapability=_callCapability;
@property(readonly, copy, nonatomic) NSNumber *unseen; // @synthesize unseen=_unseen;
@property(readonly, copy, nonatomic) NSNumber *callDuration; // @synthesize callDuration=_callDuration;
@property(readonly, nonatomic) int callRecordType; // @synthesize callRecordType=_callRecordType;
@property(readonly, copy, nonatomic) INPerson *caller; // @synthesize caller=_caller;
@property(readonly, copy, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned int)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (id)initWithIdentifier:(id)arg1 dateCreated:(id)arg2 caller:(id)arg3 callRecordType:(int)arg4 callCapability:(int)arg5 callDuration:(id)arg6 unseen:(id)arg7;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

