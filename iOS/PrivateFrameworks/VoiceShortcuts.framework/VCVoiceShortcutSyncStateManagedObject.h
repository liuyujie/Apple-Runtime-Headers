//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSData, NSString, VCVoiceShortcutManagedObject;

@interface VCVoiceShortcutSyncStateManagedObject : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(nonatomic) _Bool hasSynced; // @dynamic hasSynced;
@property(retain, nonatomic) NSData *metadata; // @dynamic metadata;
@property(copy, nonatomic) NSString *syncServiceIdentifier; // @dynamic syncServiceIdentifier;
@property(retain, nonatomic) VCVoiceShortcutManagedObject *voiceShortcut; // @dynamic voiceShortcut;

@end

