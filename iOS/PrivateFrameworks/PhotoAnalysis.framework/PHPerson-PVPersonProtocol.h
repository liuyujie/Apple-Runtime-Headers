//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHPerson.h"

#import "PVPersonProtocol.h"

@class NSString;

@interface PHPerson (PVPersonProtocol) <PVPersonProtocol>
- (void)pv_addMergeCandidatePersons:(id)arg1;
@property(retain, nonatomic) id <PVFaceProtocol> keyFace;
@property(nonatomic) long long manualOrder;
@property(nonatomic) _Bool isVerified; // @dynamic isVerified;
@property(readonly, nonatomic) _Bool favorite;
@property(readonly, nonatomic) _Bool hidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long faceCount;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) NSString *name;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long verifiedType;
@end

