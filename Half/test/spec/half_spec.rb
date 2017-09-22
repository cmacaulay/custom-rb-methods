require '../lib/half'

describe Half do
  context "if you create a new instance of class" do
    it "the class exists" do
      half = Half.new
      expect(half.class).to eq Half
    end
  end

  # context "when passed an array" do
  #   it "returns two arrays of half the size"
  # end
end
