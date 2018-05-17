//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID, TSPComponent, TSPData, TSPObject;

@protocol TSPDecoderReadCoordinatorDelegate <NSObject>
@property(readonly, nonatomic) _Bool isCrossAppPaste;
@property(readonly, nonatomic) _Bool isCrossDocumentPaste;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) _Bool hasDocumentVersionUUID;
@property(readonly, nonatomic) unsigned long long fileFormatVersion;
- (_Bool)shouldDecodeMissingDataAsRemote;
- (id <TSPDecoderDataInfo>)dataInfoForIdentifier:(long long)arg1;
- (TSPData *)cachedDataForIdentifier:(long long)arg1;
- (NSUUID *)objectUUIDForExternalReferenceToIdentifier:(long long)arg1;
- (long long)objectIdentifierForUUID:(NSUUID *)arg1;
- (_Bool)shouldResolveExternalReferencesUsingObjectUUID;
- (_Bool)canResolveExternalReferences;
- (TSPComponent *)rootObjectComponent;
- (_Bool)processMetadataObject:(TSPObject *)arg1 error:(id *)arg2;
- (TSPComponent *)metadataComponent;
- (TSPObject *)cachedMetadataObject;
@end
