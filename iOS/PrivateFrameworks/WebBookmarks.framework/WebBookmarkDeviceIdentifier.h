//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSURL, NSUUID;

@interface WebBookmarkDeviceIdentifier : NSObject
{
    NSURL *_plistURL;
    NSUUID *_UUID;
    _Bool _encounteredErrorWhileObtainingUUID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_fileMonitor;
    _Bool _readOnly;
}

+ (void)_postWebBookmarkMetaDataChangeDistributedNotification:(id)arg1;
+ (void)clearDeviceIdentifierWithPlistURL:(id)arg1;
@property(nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
- (void).cxx_destruct;
- (id)description;
- (void)stopObservingChanges;
@property(readonly, nonatomic) _Bool encounteredErrorWhileObtainingUUID;
@property(readonly, nonatomic) NSUUID *UUID;
- (void)_metaDataDidChange:(id)arg1;
- (void)_createOrLoadMetaData;
- (void)_cancelMonitoringMetaDataFile;
- (void)_resumeMonitoringMetaDataFile;
- (void)_registerForMedadaDataFileChangeDistributedNotification;
- (void)dealloc;
- (id)initWithPlistURL:(id)arg1 readOnly:(_Bool)arg2;

@end
