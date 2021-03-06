//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTKUtilityComplicationFactoryDelegate.h"
#import "NTKWellnessTimelineModelSubscriber.h"

@class CLKDevice, NSObject<OS_dispatch_source>, NSString, NTKUtilityComplicationFactory, NTKWellnessEntryModel;

@interface NTKActivityFaceViewFactory : NSObject <NTKUtilityComplicationFactoryDelegate, NTKWellnessTimelineModelSubscriber>
{
    NTKWellnessEntryModel *_nowEntryModel;
    _Bool _wantsUpdateNowEntryModelNextLive;
    double _lastWristRaiseTime;
    double _wristRaiseTimoutDuration;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    _Bool _analog;
    _Bool _hasBeenLiveOrOnDeck;
    _Bool _isLoadingData;
    _Bool _showsCanonicalContent;
    _Bool _showsLockedContent;
    CLKDevice *_device;
    NTKUtilityComplicationFactory *_complicationFactory;
    id <NTKActivityFaceViewFactoryDelegate> _delegate;
    int _dataMode;
}

+ (_Bool)userActiveEnergyIsCalories;
+ (id)userActiveEnergyUnit;
+ (id)prelaunchApplicationIdentifiers;
+ (void)prewarmForDevice:(id)arg1;
+ (void)_purgeGLContexts;
+ (void)initialize;
@property(nonatomic) int dataMode; // @synthesize dataMode=_dataMode;
@property(nonatomic) __weak id <NTKActivityFaceViewFactoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showsLockedContent; // @synthesize showsLockedContent=_showsLockedContent;
@property(nonatomic) _Bool showsCanonicalContent; // @synthesize showsCanonicalContent=_showsCanonicalContent;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(nonatomic) _Bool hasBeenLiveOrOnDeck; // @synthesize hasBeenLiveOrOnDeck=_hasBeenLiveOrOnDeck;
@property(retain, nonatomic) NTKUtilityComplicationFactory *complicationFactory; // @synthesize complicationFactory=_complicationFactory;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) _Bool analog; // @synthesize analog=_analog;
- (void).cxx_destruct;
- (id)debugStringForEntry:(id)arg1;
- (id)_complicationSlots;
- (id)_colorComplicationSlots;
- (id)_utilityComplicationSlots;
- (int)keylineStyleForComplicationSlot:(id)arg1;
- (id)_slotForUtilitySlot:(int)arg1;
- (int)_utilitySlotForSlot:(id)arg1;
- (void)_configureComplicationFactory:(id)arg1;
- (void)launchActivityApp;
- (int)complicationPickerStyleForSlot:(id)arg1;
- (float)faceView:(id)arg1 keylineCornerRadiusForComplicationSlot:(id)arg2;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (unsigned int)faceView:(id)arg1 keylineLabelAlignmentForComplicationSlot:(id)arg2;
- (int)faceView:(id)arg1 legacyLayoutOverrideforComplicationType:(unsigned int)arg2 slot:(id)arg3;
- (void)faceView:(id)arg1 configureComplicationView:(id)arg2 forSlot:(id)arg3;
- (id)faceView:(id)arg1 newLegacyViewForComplication:(id)arg2 family:(int)arg3 slot:(id)arg4;
- (float)_lisaGapForState:(int)arg1;
- (float)_edgeGapForState:(int)arg1;
- (float)_keylinePaddingForState:(int)arg1;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)_dateComplicationFontForStyle:(unsigned int)arg1;
- (id)utilityDateComplicationFontForDateStyle:(unsigned int)arg1;
- (void)_resetWristRaiseAnimationTimeout;
- (_Bool)shouldPerformFromZeroWristRaise;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (void)dealloc;
- (void)_handleActiveEnergyUnitChange;
- (id)_canonicalEntryModel;
@property(readonly, nonatomic) NTKWellnessEntryModel *currentEntryModel;
- (void)_updateRingsForCurrentEntryModelAnimated:(_Bool)arg1;
- (void)_loadCurrentEntryForce:(_Bool)arg1;
- (void)_loadCurrentEntry;
- (void)wellnessTimeLineModelCurrentEntryModelUpdated:(id)arg1;
- (id)initForAnalog:(_Bool)arg1 forDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

