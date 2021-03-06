//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _MXAssetStorage, _MXExtensionDispatchCenter, _MXExtensionMatchingMerger, _MXExtensionServiceCenter;

@interface _MXExtensionProvider : NSObject
{
    Class _extensionMatchingClass;
    id _matchingContext;
    id _intentNonUIMatchingContext;
    id _intentUIMatchingContext;
    NSArray *_blacklistedExtensions;
    NSArray *_blacklistedContainingApplications;
    _MXExtensionMatchingMerger *_merger;
    _MXExtensionDispatchCenter *_dispatchCenter;
    _MXExtensionServiceCenter *_serviceCenter;
    _MXAssetStorage *_assetStorage;
}

+ (id)sharedProvider;
@property(retain, nonatomic) _MXAssetStorage *assetStorage; // @synthesize assetStorage=_assetStorage;
@property(retain, nonatomic) _MXExtensionServiceCenter *serviceCenter; // @synthesize serviceCenter=_serviceCenter;
@property(retain, nonatomic) _MXExtensionDispatchCenter *dispatchCenter; // @synthesize dispatchCenter=_dispatchCenter;
@property(retain, nonatomic) _MXExtensionMatchingMerger *merger; // @synthesize merger=_merger;
- (void).cxx_destruct;
- (void)imageForKey:(id)arg1 extension:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadImageForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)imageForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_disableExtension:(id)arg1 error:(id *)arg2;
- (_Bool)_enableExtension:(id)arg1 error:(id *)arg2;
- (id)siblingExtensionsWithContainingAppIdentifer:(id)arg1;
- (id)_extensionWithIdentifier:(id)arg1;
- (id)_currentExtensions;
- (void)removeExtensionUpdateHandler:(id)arg1;
- (void)_restartMatchingExtensionsForDefaultsChange;
- (void)_endMatchingExtensionsIfNeeded;
- (id)_intentClassFilter:(id)arg1;
- (void)_beginMatchingExtensionsIfNeeded;
- (id)_extensionsByFilteringBlacklistedExtensionsFromArray:(id)arg1;
- (id)addExtensionsUpdateHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

