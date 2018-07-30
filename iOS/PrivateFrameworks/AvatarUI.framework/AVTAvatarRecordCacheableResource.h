//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVTCacheableResource.h"

@class AVTUIEnvironment, NSString;

@interface AVTAvatarRecordCacheableResource : NSObject <AVTCacheableResource>
{
    id <AVTAvatarRecord> _record;
    AVTUIEnvironment *_environment;
}

+ (id)persistentIdentifierPrefixForRecordWithIdentifier:(id)arg1;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <AVTAvatarRecord> record; // @synthesize record=_record;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)tokenForObservingChangesWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)requiresEncryption;
- (unsigned long long)costForScope:(id)arg1;
- (id)identifierForScope:(id)arg1;
- (id)persistentIdentifierForScope:(id)arg1;
- (id)volatileIdentifierForScope:(id)arg1;
- (id)initWithAvatarRecord:(id)arg1 environment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
