//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class ASWriteReviewConfiguration, ASWriteReviewRateView;

@interface ASRateViewController : NSViewController
{
    BOOL _hasActiveRequest;
    CDUnknownBlockType _completionBlock;
    ASWriteReviewConfiguration *_configuration;
}

+ (struct CGSize)preferredSizeForConfiguration:(id)arg1;
@property(nonatomic) BOOL hasActiveRequest; // @synthesize hasActiveRequest=_hasActiveRequest;
@property(retain, nonatomic) ASWriteReviewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
@property(readonly, nonatomic) ASWriteReviewRateView *rateView;
- (void)updateControls;
- (void)configureDialogView:(id)arg1;
- (void)loadView;
- (id)initWithConfiguration:(id)arg1;

@end
