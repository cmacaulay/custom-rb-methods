require '../lib/half'

describe Half do
  context "if you create a new instance of class" do
    it "the class exists" do
      half = Half.new
      expect(half.class).to eq Half
    end
  end

  context "when passed an array" do
    it "returns two arrays of half the size"
    test1      = Half.new
    array     = [2, 5, 6, 8]
    expected  = test1.half(array)

    expect(expected).to eq [[2, 5][6, 8]]
  end
end
