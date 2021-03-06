// UIImage+Alpha.h
// Created by Trevor Harmon on 9/20/09.
// Free for personal or commercial use, with or without modification.
// No warranty is expressed or implied.

// Helper methods for adding an alpha layer to an image
@interface UIImage (Alpha)

- (BOOL)jmc_hasAlpha;

- (UIImage *)jmc_imageWithAlpha;

- (UIImage *)jmc_transparentBorderImage:(NSUInteger)borderSize;

@end
