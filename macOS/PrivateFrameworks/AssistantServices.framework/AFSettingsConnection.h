//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFVoiceInfo, NSArray, NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface AFSettingsConnection : NSObject
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_voicesQueue;
    NSArray *_voices;
    AFVoiceInfo *_selectedVoice;
    id <AFSettingsDelegate> _delegate;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)fetchExperimentContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchExperimentConfigurationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendMetricsToServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)purgeAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchEventRecordsFromAnalyticsStoreAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getStereoPairState:(CDUnknownBlockType)arg1;
- (void)getStereoPartnerLastMyriadWinDate:(CDUnknownBlockType)arg1;
- (void)setHorsemanSupplementalLanguageDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHorsemanSupplementalLanguageDictionary:(CDUnknownBlockType)arg1;
- (void)getSupplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getSupplementalLanguageDictionaryForProduct:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSupplementalLanguagesModificationDate:(CDUnknownBlockType)arg1;
- (void)getSupplementalLanguagesDictionary:(CDUnknownBlockType)arg1;
- (void)setSupplementalLanguages:(id)arg1 forProduct:(id)arg2 forBuildVersion:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setSupplementalLanguageDictionary:(id)arg1 forProduct:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stopAllAudioPlaybackRequests:(BOOL)arg1;
- (void)stopAudioPlaybackRequest:(id)arg1 immediately:(BOOL)arg2;
- (void)startAudioPlaybackRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPeerIdentifiers:(CDUnknownBlockType)arg1;
- (void)startRemoteRequest:(id)arg1 onPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startUIRequestWithSpeechAudioFileURL:(id)arg1;
- (void)startUIRequestWithText:(id)arg1;
- (void)startUIRequest:(id)arg1;
- (void)setLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setLanguage:(id)arg1;
- (void)setOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setOutputVoice:(id)arg1;
- (void)getAvailableVoicesForLanguage:(id)arg1 includeAssetInfo:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setOfflineDictationProfileOverridePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createOfflineSpeechProfileWithLanguage:(id)arg1 JSONData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getOfflineDictationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateOfflineSpeechProfileWithLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAvailableVoicesForSynthesisLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 includeAssetInfo:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateVoicesIncludingAssetInfo:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_filterVoices:(id)arg1 forLanguage:(id)arg2;
- (id)_voices;
- (void)_setVoices:(id)arg1;
- (void)configOverrides:(CDUnknownBlockType)arg1;
- (void)setConfigOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getDevicesWithAvailablePHSAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)disableAndDeleteCloudSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)barrier;
- (void)killDaemon;
- (void)setDictationEnabled:(BOOL)arg1;
- (void)setAssistantEnabled:(BOOL)arg1;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)deleteAccountWithIdentifier:(id)arg1;
- (void)saveAccount:(id)arg1 setActive:(BOOL)arg2;
- (id)accounts;
- (void)fetchAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSupportedLanguageCodes:(CDUnknownBlockType)arg1;
- (id)_settingsServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_settingsService;
- (id)_connection;
- (void)_clearConnection;
- (void)dealloc;
- (id)init;
- (void)_tellDelegateServerVerificationReport:(id)arg1;
- (void)_tellDelegatePartialVerificationResult:(id)arg1;
@property(nonatomic, setter=_setDelegate:) __weak id <AFSettingsDelegate> _delegate;
- (void)_runServiceMaintenance;
- (void)_startDeepSyncVerificationForKeys:(id)arg1;
- (void)_setSyncVerificationNeededAndFullReportNeeded:(BOOL)arg1 shouldPostNotification:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchPeerData:(CDUnknownBlockType)arg1;
- (void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(BOOL)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_clearSyncNeededForKey:(id)arg1;
- (void)_setSyncNeededForReason:(id)arg1;

@end

