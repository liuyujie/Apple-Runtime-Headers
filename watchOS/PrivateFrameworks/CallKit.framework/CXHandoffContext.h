//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class CXHandle, NSDictionary, NSString;

@interface CXHandoffContext : NSObject <NSSecureCoding>
{
    _Bool _outgoing;
    NSString *_handoffIdentifier;
    CXHandle *_remoteHandle;
    NSDictionary *_context;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(copy, nonatomic) CXHandle *remoteHandle; // @synthesize remoteHandle=_remoteHandle;
@property(nonatomic, getter=isOutgoing) _Bool outgoing; // @synthesize outgoing=_outgoing;
@property(readonly, copy, nonatomic) NSString *handoffIdentifier; // @synthesize handoffIdentifier=_handoffIdentifier;
- (void).cxx_destruct;
- (unsigned int)hash;
- (_Bool)isEqualToHandoffContext:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithHandoffIdentifier:(id)arg1;

@end

