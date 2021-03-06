//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXBlueprintAnalyzer.h"

@class NSString;

@interface SXBlueprintAnalyzer : NSObject <SXBlueprintAnalyzer>
{
    id <SXDocumentControllerProvider> _documentControllerProvider;
}

@property(retain, nonatomic) id <SXDocumentControllerProvider> documentControllerProvider; // @synthesize documentControllerProvider=_documentControllerProvider;
- (void).cxx_destruct;
- (_Bool)componentPlacedAboveComponentBlueprint:(id)arg1 blueprint:(id)arg2;
- (id)markersFromBlueprint:(id)arg1 layoutDataProvider:(id)arg2 cursor:(id)arg3;
- (void)iterateMarkers:(id)arg1 onMarkerFound:(CDUnknownBlockType)arg2 then:(CDUnknownBlockType)arg3 onEndReached:(CDUnknownBlockType)arg4;
- (void)analyzeBlueprint:(id)arg1 layoutDataProvider:(id)arg2 onMarkerFound:(CDUnknownBlockType)arg3 then:(CDUnknownBlockType)arg4 onEndReached:(CDUnknownBlockType)arg5;
- (id)initWithDocumentControllerProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

