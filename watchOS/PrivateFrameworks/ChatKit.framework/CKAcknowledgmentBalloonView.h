//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKBalloonView.h>

@class CKAcknowledgmentGlyphView;

@interface CKAcknowledgmentBalloonView : CKBalloonView
{
    unsigned int _stackCount;
    int _coloredPart;
    CKAcknowledgmentGlyphView *_glyphView;
}

@property(retain, nonatomic) CKAcknowledgmentGlyphView *glyphView; // @synthesize glyphView=_glyphView;
@property(nonatomic) int coloredPart; // @synthesize coloredPart=_coloredPart;
@property(nonatomic) unsigned int stackCount; // @synthesize stackCount=_stackCount;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)configureForAggregateAcknowledgmentChatItem:(id)arg1;

@end
