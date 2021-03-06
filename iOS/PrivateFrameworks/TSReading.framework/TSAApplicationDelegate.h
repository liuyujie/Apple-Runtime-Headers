//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TSReading/TSABaseApplicationDelegate.h>

@interface TSAApplicationDelegate : TSABaseApplicationDelegate
{
    _Bool _terminating;
    _Bool _inBackground;
    _Bool _activating;
    CDUnknownBlockType _alertCompletionBlock;
    _Bool _hasNotifiedEnterBackground;
}

+ (id)sharedDelegate;
@property _Bool hasNotifiedEnterBackground; // @synthesize hasNotifiedEnterBackground=_hasNotifiedEnterBackground;
@property(copy, nonatomic) CDUnknownBlockType alertCompletionBlock; // @synthesize alertCompletionBlock=_alertCompletionBlock;
@property(getter=isInBackground) _Bool inBackground; // @synthesize inBackground=_inBackground;
@property(getter=isActivating) _Bool activating; // @synthesize activating=_activating;
@property(getter=isTerminating) _Bool terminating; // @synthesize terminating=_terminating;
- (id)stringForImportingDocument;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (_Bool)centerOnInitialSelection;
- (id)image32IconForTXTFiles;
- (id)noDocumentsImagePath;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (id)previewImageNameForDocumentType:(id)arg1;
- (void)persistenceError:(id)arg1;
- (void)dealloc;
- (id)init;

@end

