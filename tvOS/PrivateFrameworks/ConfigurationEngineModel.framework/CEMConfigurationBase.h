//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMDeclarationBase.h>

@interface CEMConfigurationBase : CEMDeclarationBase
{
}

+ (id)restrictionPayloadKeys;
+ (id)profileType;
+ (id)declarationClass;
- (id)profilePayloadsByTypeWithAssetProviders:(id)arg1;
- (id)synthesizeProfilePayloadOutUUIDs:(id)arg1 withOldUUIDs:(id)arg2 assetProviders:(id)arg3;
- (id)payloadUUIDWithIdentifier:(id)arg1 outUUIDs:(id)arg2 oldUUIDs:(id)arg3;
- (id)synthesizeProfileOutUUIDs:(id)arg1 withOldUUIDs:(id)arg2 assetProviders:(id)arg3;
- (id)assetReferences;
- (int)activationLevel;
- (_Bool)mustBeSupervised;
- (_Bool)multipleAllowed;

@end
