//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ACHTemplateSourceDelegate.h"

@class ACHVisibilityEvaluator, NSMutableDictionary, NSObject<ACHTemplateAssetRegistryDelegate>, NSObject<OS_dispatch_queue>;

@interface ACHTemplateAssetRegistry : NSObject <ACHTemplateSourceDelegate>
{
    NSObject<ACHTemplateAssetRegistryDelegate> *_delegate;
    ACHVisibilityEvaluator *_visibilityEvaluator;
    NSMutableDictionary *_templateSourcesByIdentifier;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSMutableDictionary *templateSourcesByIdentifier; // @synthesize templateSourcesByIdentifier=_templateSourcesByIdentifier;
@property(retain, nonatomic) ACHVisibilityEvaluator *visibilityEvaluator; // @synthesize visibilityEvaluator=_visibilityEvaluator;
@property(nonatomic) __weak NSObject<ACHTemplateAssetRegistryDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)templateSourceDidUpdateAssets:(id)arg1;
- (void)_setBundleURLsForAchievemnt:(id)arg1;
- (void)populateResourcePropertiesForAchievement:(id)arg1;
- (void)deregisterTemplateSource:(id)arg1;
- (void)registerTemplateSource:(id)arg1;
- (id)init;
- (id)initWithVisibilityEvaluator:(id)arg1;

@end
