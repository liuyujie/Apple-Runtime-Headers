//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AvatarUI/AVTTransition.h>

@interface AVTSectionItemTransition : AVTTransition
{
    id <AVTSectionItemTransitionModel> _sectionItemTransitionModel;
}

@property(readonly, nonatomic) id <AVTSectionItemTransitionModel> sectionItemTransitionModel; // @synthesize sectionItemTransitionModel=_sectionItemTransitionModel;
- (void).cxx_destruct;
- (id)model;
- (void)performTransition;
- (id)initWithModel:(id)arg1 animated:(_Bool)arg2 setupHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4 logger:(id)arg5;

@end

